
int main(){
    float celsius, kelvin;
    //demande
    printf("entrer la température en celsius:");
    scanf("%f",&celsius);
    //convert
    kelvin = celsius + 273.15;
    //resulta
    printf("resutla en kelvin est :%.2f K\n " ,kelvin);
    
    return 0;

}