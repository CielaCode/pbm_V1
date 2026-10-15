/******************************************/
/** Image blanche de 800 x 600           **/
/** V1.Bogt2020 LtDorian		 **/
/**                       09/11/2020	 **/
/******************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
       int compteur;
/* en tete de l'image */
       printf("P1\n");
/* pas de commentaire */
       printf("800 600\n");
/* génération des 480000 pixels */
       for (compteur=0;compteur<800*600; compteur++)
                       printf("0\n");
return EXIT_SUCCESS;
}
/*  faire un fichier pbm avec ce qui s'affiche */
/* ./imgblc > imgblc.pbm  */
