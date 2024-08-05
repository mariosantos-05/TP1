#include "../Modules/MACON/MACON.h"
#include "../Interfaces/Int_MAA.h"
#include "../Interfaces/Int_MAC.h"
#include "../Interfaces/Int_MAI.h" // Include this to use CntrIAInvestimentos
#include "../Modules/MAA/MAA.h"
#include "../Modules/MAC/MAC.h"
#include "../Modules/MSC/MSC.h"
#include "../Modules/MAI/MAI.h"

int main() {
    CPF cpf("000.000.000-00");
    // Instantiate the necessary controllers
    CntrIAAutenticacao autenticacaoController;
    CntrIAConta contaController(cpf);
    CntrIAInvestimentos investimentos;
    // CntrIAInvestimentos investimentoController; // Uncomment if using investments

    // Initialize the services and set them in the controllers
    AutenticacaoService autenticacaoService;
    contaController.setCntrISConta(new ContaService()); // Instantiate and set the ContaService

    // Initialize the main screen
    MainScreen mainScreen;

    // Set the controllers for the main screen
    mainScreen.setMAA(&autenticacaoController);
    mainScreen.setMAC(&contaController); // Set the Conta controller
    //mainScreen.setMAI(&investimentoController); // Uncomment if using investments

    // Main loop to display the screen and handle user input
    while (true) {
        mainScreen.showOptions();
        int ch = getch(); // Get user input
        mainScreen.handleInput(ch); // Handle user input
    }

    return 0;
}