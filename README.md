# Técnicas de Programação 1
Repositorio para trabalhos da materia Topicos de Programação 1(CIC0197)

# Datas:
[TRABALHO-1.pdf](https://github.com/mariosantos-05/TP1/files/14654311/TRABALHO-1.pdf) - 03/05/2024


[TRABALHO-2.pdf](https://github.com/mariosantos-05/TP1/files/14654329/TRABALHO-2.pdf) - 21/06/2024

senha dos arquivos: __CIC0197UNB__





<h1>REQUISITOS FUNCIONAIS</h1>
<p>O sistema a ser desenvolvido possibilitará criar, ler, atualizar e excluir registros, operações frequentemente designadas pela sigla CRUD (Create, Read, Update, Delete). O sistema visa facilitar a monitoração de pagamentos e vencimentos de títulos de renda fixa das seguintes classes: Certificado de Depósito Bancário (CDB), Certificado de Recebíveis do Agronégocio (CRA), Certificado de Recebíveis Imobiliários (CRI), Letra de Crédito do Agronegócio (LCA), Letra de Crédito Imobiliário (LCI) e debênture. Para usar o sistema, o usuário deve criar uma conta. Para isso, deve informar nome, CPF e senha. O usuário precisa ser autenticado para ter acesso aos serviços providos pelo sistema. Para ser autenticado, deve informar CPF e senha. Após ser autenticado, tem acesso aos seguintes serviços: ler conta, atualizar conta, excluir conta, criar título, ler título, atualizar título, excluir título, listar títulos, criar pagamento, ler pagamento, atualizar pagamento, excluir pagamento e listar pagamentos. A leitura de um registro (conta, título ou pagamento) resulta na apresentação dos dados do registro. A atualização de um registro (conta, título ou pagamento) possibilita atualizar dado do registro, exceto dado usado para identificar o registro (chave primária). O serviço listar títulos resulta na apresentação dos dados de cada título associado à conta do usuário. Por sua vez, o serviço listar pagamentos resulta na apresentação dos dados de cada pagamento associado ao título identificado quando da solicitação desse serviço. O sistema deve assegurar as seguintes regras: usuário só pode excluir registro (conta, título ou pagamento) criado por ele; a exclusão de conta resulta na exclusão de títulos associados à conta; a exclusão de título resulta na exclusão de pagamentos associados ao título. A data de cada pagamento não pode ser anterior à data de emissão e nem posterior à data de vencimento do título associado. O sistema deve assegurar as regras de negócio representadas no seguinte diagrama:</p>


![image](https://github.com/mariosantos-05/TP1/assets/76963308/240bf9a9-f162-4620-ae33-7a62d8885e57)

__(OBS) PK = Primary Key__

## Requisitos Não Funcionais

1. Adotar o estilo de arquitetura em camadas (*layers*).
2. A arquitetura do software deve ser composta por camada de apresentação e por camada de serviço.
3. A camada de apresentação deve ser responsável pela interface com o usuário e pela validação dos dados de entrada.
4. A camada de serviço deve ser responsável pela lógica de negócio e por armazenar dados.
5. Cada camada deve ser decomposta em módulos de software.
6. Módulos de software devem interagir por meio de serviços especificados em interfaces.
7. Módulos de software devem ser decompostos em classes.
8. Devem ser implementadas classes que representem domínios, entidades e controladoras.
9. Implementar o código na linguagem de programação C++.
10. Prover projeto compatível com o ambiente de desenvolvimento Code::Blocks.
11. Nas implementações dos códigos de validação não é necessário considerar acentuação e nem a letra ç.

## Domínios

| Nome              | Formato Válido                                                                                               |
|-------------------|--------------------------------------------------------------------------------------------------------------|
| Código de pagamento | Formato XXXXXXXX X é dígito (0-9). Primeiro dígito é diferente de zero (1-9).                                |
| Código de título   | CDBXXXXXXXX CRAXXXXXXXX CRIXXXXXXXX LCAXXXXXXXX LCIXXXXXXXX DEBXXXXXXXX. X - Letra maiúscula (A-Z) ou dígito (0-9). |
| CPF               | Formato XXX.XXX.XXX-CC. X - Dígito (0-9). Pontos usados para separar sequências de três dígitos. Hífen usado para separar sequências de dígitos de caracteres de validação. CC - Caracteres de validação calculados segundo algoritmo de validação de CPF. |
| Data              | Formato DD-MM-AAAA. DD - 01 a 31. MM - 01 a 12. AAAA - 2000 a 2100. Hífens usados para separar dias, meses e anos. Levar em consideração anos bissextos. |
| Dinheiro          | Valor 0 a 1.000.000,00.                                                                                      |
| Estado            | Previsto Liquidado Inadimplente.                                                                             |
| Nome              | Composto por um ou dois termos. Cada termo tem 3 a 10 caracteres. Cada caractere é letra (A-Z, a-z). Termos são separados por um espaço em branco. Primeiro caractere de cada termo é letra maiúscula. |
| Percentual        | Valor 0 a 100.                                                                                                |
| Senha             | Formato XXXXXX X - Dígito (0-9). Não há dígito duplicado. Primeiro dígito é diferente de zero (1-9). Sequência de dígitos não pode ser sequência de dígitos em ordem crescente ou decrescente. |
| Setor             | Agricultura Construção civil Energia Finanças Imobiliário Papel e celulose Pecuária. Química e petroquímica Metalurgia e siderurgia Mineração. |

# TRABALHO 1

1. ## ATIVIDADES A SEREM REALIZADAS

   1. Projetar, codificar e documentar classe para cada domínio (*domain*).
   2. Projetar, codificar e documentar classe para cada entidade (*entity*).
   3. Projetar, codificar e executar teste de unidade (*unit test*) para cada classe domínio.
   4. Projetar, codificar e executar teste de unidade (*unit test*) para cada classe entidade.

2. ## REQUISITOS A SEREM CUMPRIDOS

   1. Trabalho pode ser realizado individualmente ou por equipe com até cinco participantes.
   2. Preencher os documentos com clareza e atentar para a ortografia.
   3. Adotar um padrão de codificação (*coding standard*).
   4. Fornecer os códigos em formato fonte e em formato executável.
   5. Em cada classe, identificar por comentários a matrícula do aluno responsável pela implementação da classe.
   6. Cada classe domínio deve conter atributo que seja instância de tipo suportado pela linguagem de programação.
   7. Cada classe domínio deve permitir acesso ao atributo por meio de métodos públicos *set* e *get*.
   8. Método *set* de cada classe domínio deve lançar exceção em caso de formato inválido.
   9. Cada classe de entidade deve conter atributos onde cada atributo é instância de classe domínio.
   10. Cada classe de entidade deve permitir acesso aos atributos por meio de métodos públicos *set* e *get*.
   11. Nesse trabalho, associações entre entidades não são implementadas.
   12. Cada teste de unidade deve ser classe com diferentes métodos para diferentes casos de teste.
   13. Cada teste de domínio deve exercitar o domínio por meio de um cenário com valor válido e um com valor inválido.
   14. Execução de cada teste de domínio deve resultar em sucesso.
   15. Cada teste de entidade deve invocar cada método público da entidade pelo menos uma vez.
   16. Cada teste de entidade deve comprovar que métodos invocados resultam no comportamento esperado.
   17. Execução de cada teste de entidade deve resultar em sucesso.
   18. Fornecer projeto Code::Blocks que possibilite compilar e executar códigos sem erros na plataforma de correção.
   19. Documentar classes que representam domínios e entidades em formato HTML por meio da ferramenta Doxygen.
   20. Escrever documentação das classes em formato HTML segundo perspectiva dos usuários das classes.
   21. Incluir todos os artefatos construídos em um arquivo zip.
   22. Atribuir o nome T1-TP1-X-Y-Z.ZIP ao arquivo zip.
   23. No nome do arquivo zip, X, Y e Z devem ser os números de matrícula dos autores do trabalho.
   24. Testar se o arquivo pode ser descompactado com sucesso e se não há vírus no mesmo.
   25. Enviar o arquivo dentro do prazo.
   26. Não cumprimento de requisitos resulta em redução de nota do trabalho.

3. ## CRITÉRIOS DE CORREÇÃO

| ITEM | CRITÉRIO                                                                                                                | % ACERTO          |
|-----|------------------------------------------------------------------------------------------------------------------------|-------------------|
| 1   | Cada domínio documentado, contém set e get e set que lança exceção quando valor é inválido.                           | 0, 25, 50, 75, 100|
| 2   | Cada entidade documentada, contém atributos instâncias de domínios acessáveis por set e get.                           | 0, 25, 50, 75, 100|
| 3   | Cada teste de domínio é classe que exercita domínio com valor válido e inválido e não ocorre falha.                   | 0, 25, 50, 75, 100|
| 4   | Cada teste de entidade é classe que exercita cada método de entidade e não ocorre falha.                               | 0, 25, 50, 75, 100|

# TRABALHO 2

1. ### ATIVIDADES A SEREM REALIZADAS

   1. Construir um modelo de arquitetura do software, codificar e documentar as interfaces entre módulos.
   2. Projetar e codificar a camada de apresentação.
   3. Projetar e codificar a camada de serviço.
   4. Criar vídeo que demonstre a execução com sucesso do código integrado.

2. ### REQUISITOS A SEREM CUMPRIDOS

   1. Trabalho pode ser realizado individualmente ou por equipe com até cinco participantes.
   2. Preencher os documentos com clareza e atentar para a ortografia.
   3. Adotar um padrão de codificação (coding standard).
   4. Fornecer os códigos em formato fonte e em formato executável.
   5. Desenvolver o sistema segundo os requisitos funcionais e não funcionais especificados.
   6. Em cada classe, identificar por comentários, a matrícula do aluno responsável pela implementação da classe.
   7. Modelo de arquitetura deve conter diagrama composto por módulos, interfaces entre módulos e relacionamentos.
   8. Modelo de arquitetura deve conter descrições textuais das responsabilidades de cada módulo.
   9. Fornecer modelo de arquitetura de software em arquivo PDF.
   10. Declarar em código as interfaces entre módulos por meio de classes abstratas.
   11. Classes abstratas devem ser compostas por métodos virtuais puros.
   12. Documentar as classes que representam interfaces usando formato HTML por meio da ferramenta Doxygen.
   13. Escrever documentação das classes em formato HTML segundo perspectiva dos usuários das classes.
   14. Camada de apresentação deve implementar e depender de serviços relacionados em interfaces declaradas.
   15. Camada de apresentação pode ser codificada usando cin e cout, PDCurses ou interface gráfica.
   16. Camada de serviço dever implementar serviços relacionados em interfaces declaradas.
   17. Camada de serviço pode armazenar os objetos em estrutura de dados em memória (fila, pilha etc.).
   18. Camada de serviço pode armazenar os objetos em banco de dados relacional usando o produto SQLite.
   19. Neste trabalho, associações entre entidades são implementadas.
   20. Vídeo a ser fornecido deve demonstrar que o código integrado é executado com sucesso.
   21. Deve existir um caso de teste para cada funcionalidade relacionada nos requisitos funcionais.
   22. Cada caso de teste deve contemplar um cenário de sucesso.
   23. Fornecer projeto Code::Blocks que possibilite compilar e executar códigos sem erros na plataforma de correção.
   24. Incluir todos os artefatos construídos em um arquivo zip.
   25. Atribuir o nome T1-TP1-X-Y-Z.ZIP ao arquivo zip.
   26. No nome do arquivo zip, X, Y e Z devem ser os números de matrícula dos autores do trabalho.
   27. Testar se o arquivo pode ser descompactado com sucesso e se não há vírus no mesmo.
   28. Enviar o arquivo dentro do prazo.
   29. Não cumprimento de requisitos resulta em redução de nota do trabalho.

3. ### CRITÉRIOS DE CORREÇÃO

| ITEM | CRITÉRIO | % ACERTO |
|------|----------|----------|
| 1    | Provido modelo de arquitetura do software, codificadas e documentas interfaces entre módulos. | 0, 25, 50, 75, 100 |
| 2    | Código implementa e depende de interfaces declaradas, realiza interface com usuário e valida dados de entrada. | 0, 25, 50, 75, 100 |
| 3    | Código implementa interfaces declaradas, implementa lógica de negócio e armazena dados. | 0, 25, 50, 75, 100 |
| 4    | Vídeo demonstra a execução com sucesso do código integrado. | 0, 25, 50, 75, 100 |

