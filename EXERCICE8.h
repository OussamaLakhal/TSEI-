
int EX8 ()
{
int nombre,remise = 0;
float PHT,TTC,NAP
printf("veuillez entrer le nombre d'article \n prix unitaire hors taxes :\n");
scanf("%d%f,&nombre,&PHT");
NAP = nombre * PHT;
NAP += NAP *0.2;
if(NAP . 1000){
    remise= 5;
}
TTC = NAP-((NAP*remise)/100);
printf("le mantant TTC est: %.2fDH \nle remise est :%d \nle prix finalest:%.2fDH\n",NAP,remise,TTC);
}
