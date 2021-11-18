int EX1()
{
    int Q ;
    float TVA=0.2 ,PHT , PF;
    printf("veuillez entrer le prix hors taxe ");
    scanf("%f",&PHT);
    printf("veuillez entrer la quantité commandée");
    scanf("%d",&Q);
    PF=(PHT*Q)+((Q*PHT)*TVA);
    printf("LE PRIX FINAL EST :%.2f",PF);
}
