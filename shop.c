#include <windows.h>
#include <stdio.h>

int main(){
    char options[] = "\n 0. Flipper \n 1. WifiPineapple \n 2. BlackArchUsb \n 3. RubberDucky \n 4. Digispark ";
    int SelectedOption;
    float prices[] = {340.00,119.99,5.00,79.99,2.00};
    printf("+=================+  Welcome the my shop how can i help you!  +=================+\n");
    printf("%s \n",options);
    printf("=====================================================================================\n");
    printf("1. Select opton to buy: \n");
    printf("2. Check the price: ");
    scanf("%d",&SelectedOption);

    if(SelectedOption == 1){
        printf("%s\n",options);
        printf("Select opton to check: ");
        scanf("%d",&SelectedOption);
        printf("Your total will be $%.1f",prices[SelectedOption]);
    }
    else if(SelectedOption == 2){
        printf("%s\n",options);
        printf("Select opton to check: ");
        scanf("%d",&SelectedOption);
        printf("$%.1f \n ",prices[SelectedOption]);
    }
    


}