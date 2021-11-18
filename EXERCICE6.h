int  EX6()
{
float PRIX,M;
int Q;
    printf("donner le prix e produit \n combien d'unites?");
    scanf("%f %d",&PRIX,&Q);
    M=PRIX*Q;
if(M > 200 ) {
    printf("le montant de la facture est: \n %f",M+25);
}
else { printf("le montant de la facture est: \n %f",M) }
}
