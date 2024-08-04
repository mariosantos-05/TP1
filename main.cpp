#include "../Modules/MACON/MACON.h"
#include "../Interfaces/Int_MAA.h"
#include "../Interfaces/Int_MAC.h"
#include "../Modules/MAA/MAA.h"
#include "../Modules/MAC/MAC.h"
#include "../Domains/Headers/CPF.h"

int main() {
    // Instantiate the necessary controllers
    CntrIAAutenticacao autenticacaoController;

    // Initialize the service for authentication and set it in the controller
    AutenticacaoService autenticacaoService;
    autenticacaoController.setCntrISAunteticacao(&autenticacaoService);

    // Initialize the main screen
    MainScreen mainScreen;

    // Set the controllers for the main screen
    mainScreen.setMAA(&autenticacaoController);
   // mainScreen.setMAC(&contaController);
    // mainScreen.setMAI(&investimentoController); // Uncomment if needed and instantiated

    // Main loop to display the screen and handle user input
    while (true) {
        mainScreen.showOptions();
        int ch = getch(); // Get user input
        mainScreen.handleInput(ch); // Handle user input
    }

    return 0;
}