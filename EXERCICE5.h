int EX5()
{
int argent;
int billet de 100=0;
int billet de 50=0;
int billet de 10=0;
int billet de 5=0;
int billet de 1=0;
     print("entrer la valeur d'argent: \n");
     scanf("%d",&argent);
     while(argent >=0 ){
        if (argent >= 100 ){
                 argent -= 100;
             billet de 100++;
          }
          else if (argent >=50){
            argent -=50;
            billet de 50++;
          }
          else if(argent>=10){
            argent -=10;
            billet de 10++;
          }
          else if(argent >= 5){
            argent -= 5;
            billet de 5++
          }
          else if(argent >= 1){
            argent -= 1;
            billet de 1++;
          }
          else{break;}
     }
     printf("pour la somme : \n %d de 100DH \n%d de 50 DH \n %d de 10 DH \n %d de 5 DH \n %d de 1 DH \n",billet de 100 DH , billet de 50 DH , billet de 10 DH , billet de 5 DH , billet de 1 DH );

}
