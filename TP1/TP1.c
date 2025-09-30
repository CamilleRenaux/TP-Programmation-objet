#include <stdio.h>

//exo 1
void exchange(int*, int*);

//exo2
void saisir(int, int mat[10][10]);
void afficher(int, int mat[10][10]);
void multiplier(int, int mat1[10][10], int mat2[10][10], int mat3[10][10]);
void menu(void);


int main(void)
{
    // exo1
    int a=8, b=2;
    printf("a = %d b = % d\n", a,b);
    exchange(&a,&b);
    printf("a = %d b = % d\n", a,b);
    return 0; 
};

//exo1
void exchange(int* pa, int* pb)
{
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
};

//exo2
void saisir(int taille, int mat[10][10])
{
    printf("inscrivez les coefficients de la matrice carrée de taille %d ", taille);
    for (int i = 0; i<taille; i++){
        for (int j = 0; j<taille; j++){
            printf("M[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        };
    };
};

void afficher(int taille, int mat[10][10])
{
    for (int i = 0; i<taille; i++){
        for (int j = 0; j<taille; j++){
            printf("%d", mat[i][j]);
        };
        printf("\n");
    };
};

void additionner(int taille, int mat1[10][10], int mat2[10][10], int mat3[10][10])
{
    for (int i = 0; i<taille; i++){
        for (int j=0; j<taille; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        };
    };
};

void multiplier(int taille, int mat1[10][10], int mat2[10][10], int mat3[10][10])
{
    for (int i = 0; i<taille; i++){
        for (int j=0; j<taille; j++){
            mat3[i][j] = 0;
            for (int k=0; k<taille; k++){
                mat2[i][j] += mat1[i][k]*mat2[k][j];
            };
        };
    };
}

char menu()
{
   char rep;

   printf("          A....................Addition\n");
   printf("          M....................Multiplication\n");
   printf("CHOIX: ");
   rewind (stdout);
   scanf(" %c",&rep);
   return rep;
}


int main(void) {
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int a = 5;
		int b = 3;

		printf("\n\n\n\n\n\n*************   EXERCICE 1   *************\n\n");

		printf("a= %i  ; b=%i \n",a,b);
		exchange( &a , &b );
		printf("a= %i  ; b=%i \n",a,b);
		printf("\n\n\n\n\n\n*************   EXERCICE 2   *************\n\n");
		float M[MAX][MAX],P[MAX][MAX],R[MAX][MAX];
		    int nb_val;
		    char rep;



		    rep = menu();
		    printf("%c",rep);
		   do
		    {
		       switch(rep)
		       {
		          case 'a': case 'A':
		                              printf ("taille de la matrice carree :\n");
		                              rewind(stdout);
		                              scanf ("%d", &nb_val);
		                              printf("saisir de la 1ere matrice\n");
		                              saisir(M,nb_val);
		                              printf("saisir de la 2eme matrice\n");
		                              saisir(P,nb_val);
		                              additionner(M,P,R,nb_val);
		                              break;
		          case 'm': case 'M':
		                              printf ("taille de la matrice carree :\n");
		                              rewind(stdout);
		                              scanf ("%d", &nb_val);
		                              printf("saisir de la 1ere matrice\n");
		                              saisir(M,nb_val);
		                              printf("saisir de la 2eme matrice\n");
		                              saisir(P,nb_val);
		                              multiplier(M,P,R,nb_val);
		                              break;

		       }
		       if (rep == 'a' || rep == 'A' || rep == 'm' || rep == 'M')
		       {
		         afficher(M,nb_val);
		         afficher(P,nb_val);
		         afficher(R,nb_val);
		       }
		       rep =  menu();
		       printf("%c",rep);
		    } while (rep != 'q' && rep != 'Q');

	return EXIT_SUCCESS;
}



double ** SaisieMatrice(int*nl,int*nc){					

            for (int j = 0; j < i; j++)
						free(mat[j]);
					free(mat);
					mat=NULL;
				}
			}
		if(mat!= NULL)
			for(int i=0;i<*nl;i++)
				for(int j=0;j<*nc;j++){
					printf("mat[%d][%d]=",i,j);
					fflush(stdout);
					scanf("%lf",&(mat[i][j]));
				}
		return mat;
}

void AfficheMatrice(int nl,int nc, double**mat){
	for(int i=0;i<nl;i++){
		for(int j=0;j<nc;j++){
		printf("mat[%d][%d]=%.2lf  ",i,j,mat[i][j]);
		}
		printf("\n");
		fflush(stdout);
	}
}
double** MatMax(int nl,int nc,double** mat){

	double max;
	double**MMax;
	MMax = malloc(nl * sizeof(double *));
			if (MMax != NULL)
				for (int i = 0; i < nl; i++) {
					MMax[i] = malloc(nc * sizeof(double));
					if (MMax[i] == NULL) {
						for (int j = 0; j < i; j++)
							free(MMax[j]);
						free(MMax);
						MMax=NULL;
					}
				}

if (MMax!=NULL){
	printf("OKbis");
		fflush(stdout);
	for (int i=0;i<nl;i++){
		max=mat[i][0];
		for(int j=0;j<nc;j++)
			if( max<mat[i][j])
				max=mat[i][j];
		for(int j=0;j<nc;j++)
			if(mat[i][j]==max)
				MMax[i][j]=1;
			else
				MMax[i][j]=0;
	}
	printf("OKbisfin");
			fflush(stdout);
}
return MMax;
}

double** MatMin(int nl,int nc,double** mat){
	double **MMin;
	double min;
	MMin = malloc(nl * sizeof(double *));
			if (MMin != NULL)
				for (int i = 0; i < nl; i++) {
					MMin[i] = malloc(nc * sizeof(double));
					if (MMin[i] == NULL) {
						for (int j = 0; j < i; j++)
							free(MMin[j]);
						free(MMin);
						MMin=NULL;
					}
				}
if (MMin!=NULL){
	printf("OKter");
			fflush(stdout);
	for (int j=0;j<nc;j++){
		min=mat[0][j];
		for(int i=0;i<nl;i++)
			if( min>mat[i][j])
				min=mat[i][j];
		for(int i=0;i<nl;i++)
			if(mat[i][j]==min)
				MMin[i][j]=1;
			else
				MMin[i][j]=0;
	}
}
printf("OKterfin");
		fflush(stdout);
return MMin;
}
void TrouvEltPart(int nl, int nc, double** mat,double**MMax,double**MMin){
	for (int i=0; i<nl;i++){
		for(int j=0;j<nc;j++){
				if (MMax[i][j]==1 && MMin[i][j]==1)
					printf("mat[%d][%d]=%.2lf est un point clos\n",i,j,mat[i][j]);
		}
	}
}
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int nbl,nbc;
	double ** mat;
	mat= SaisieMatrice(&nbl,&nbc);
	printf("OK");
	fflush(stdout);
if (mat!=NULL){
	printf("OK");
		fflush(stdout);
	AfficheMatrice(nbl,nbc,mat);
	printf("OK");
		fflush(stdout);
	double** MaxLigne;
	double** MinColonne;

		MaxLigne=MatMax(nbl,nbc,mat);
		MinColonne=MatMin(nbl,nbc,mat);
		printf("MAXLIGNE\n");
		fflush(stdout);
		AfficheMatrice(nbl,nbc,MaxLigne);
		printf("MINCOLONNE\n");
		AfficheMatrice(nbl,nbc,MinColonne);
		printf("OK");
			fflush(stdout);
		if(MaxLigne!=NULL && MinColonne !=NULL){
			printf("POINTS CLOS:\n");
			fflush(stdout);
			TrouvEltPart(nbl,nbc,mat,MaxLigne,MinColonne);}
	return EXIT_SUCCESS;
}
}


}