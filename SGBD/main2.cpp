#include "Teste.h"

int main() {
    // Example SQL command to create a table
    string createTableSQL = "CREATE TABLE IF NOT EXISTS teste (id INTEGER PRIMARY KEY, nome TEXT);";
    
    // Example SQL command to insert data
    string insertDataSQL = "INSERT INTO Conta (cpf, senha, nome) VALUES ('038.397.831-98', '247398', 'Mario Mangues');";

    // Example SQL command to query data
    string queryDataSQL = "SELECT * FROM Conta;";

    // Run the tests
    // TestComandoSQL testCreateTable(createTableSQL);
    // testCreateTable.runTest();

    //TestComandoSQL testInsertData(insertDataSQL);
    //testInsertData.runTest();

    //TestComandoSQL testQueryData(queryDataSQL);
    //testQueryData.runTest();

    // Test authentication
    TestComandoSQL testAuth("");
    bool authResult = testAuth.autenticar("036.403.621-44", "132465");
    cout << "Authentication result: " << (authResult ? "Success" : "Failure") << endl;

    return 0;
}
