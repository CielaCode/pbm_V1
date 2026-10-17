/******************************************/
/** projet : pbm_V1                      **/
/** Image blanche de 800 x 600           **/
/** V1.Bogt2026 Lt Caroline Dorian	 **/
/**                       17/10/2026     **/
/******************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
int compteur;
/* en tete de l'image */
   printf("P1\n");  /* nombre magique voir wiki */
   printf("# image blanche réalisée avec pbm_V1\n");  /* commentaire du fichier */
   printf("800 600\n");  /* dimension de l'image */
/* boucle pour la génération des 480000 (800x600) pixels */
   for (compteur=0;compteur<800*600; compteur++)
       printf("0\n");
return EXIT_SUCCESS;
}
/*  faire un fichier pbm avec ce qui s'affiche */
/* ./pbm_V1 > image.pbm  */
