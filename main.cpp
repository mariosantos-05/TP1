#include "../Modules/MACON/MACON.h"
#include "../Interfaces/Int_MAA.h"
#include "../Interfaces/Int_MAC.h"
//#include "../Interfaces/Int_MAI.h" // Include this to use CntrIAInvestimentos
#include "../Modules/MAA/MAA.h"
#include "../Modules/MAC/MAC.h"
//#include "../Modules/MAI/MAI.h"

int main() {
    // Instantiate the necessary controllers
    CntrIAAutenticacao autenticacaoController;
    //CntrIAInvestimentos investimentoController; // Instantiate the investments controller

    // Initialize the service for authentication and set it in the controller
    AutenticacaoService autenticacaoService;
    autenticacaoController.setCntrISAunteticacao(&autenticacaoService);

    // Initialize the main screen
    MainScreen mainScreen;

    // Set the controllers for the main screen
    mainScreen.setMAA(&autenticacaoController);
    // mainScreen.setMAC(&contaController); // Uncomment if needed and instantiated
    //mainScreen.setMAI(&investimentoController); // Set the investments controller

    // Main loop to display the screen and handle user input
    while (true) {
        mainScreen.showOptions();
        int ch = getch(); // Get user input
        mainScreen.handleInput(ch); // Handle user input
    }

    return 0;
}
