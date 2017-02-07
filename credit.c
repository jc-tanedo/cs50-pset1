#import <stdio.h>
#import <cs50.h>

bool checkValid(long long cardNumber);
string identifyCard(long long cardNumber);

int main(void) {
    long long cardNumber;
    printf("Number: ");
    cardNumber = get_long_long();
    
    if (checkValid(cardNumber)){
        printf("%s\n",identifyCard(cardNumber));
    } else {
        printf("INVALID\n");
    }

}

bool checkValid(long long cardNumber){
    int sum = 0;
    bool odd = true;
    
    do {
        long long i = cardNumber % 10;
        sum += odd ? i : (i < 5) ? 2*i : ((2*i) % 10)+1;
        //printf("%lli - %i\n", cardNumber, sum);
        cardNumber /= 10;
        odd = !odd;
    } while (cardNumber>0);
    
    return (sum % 10) == 0;
}

string identifyCard(long long cardNumber){
    
    while (cardNumber > 100) {
        cardNumber /= 10;
    }
    
    switch(cardNumber) {
        case 34:
        case 37:
            return "AMEX";
            break;
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
            return "MASTERCARD";
            break;
        default:
            if (cardNumber/10 == 4) { return "VISA"; }
            break;
    }
    
    return "ERROR";
    
}