#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<errno.h>

char *cifrarCesar(char* mensaje, int clave)
{
	char* cifrado;
	int size = strlen(mensaje);

	if((cifrado=(char*)malloc((size+1)*sizeof(char)))==NULL)
	{
		int merr=errno;
		printf("Error %d:%s\n",merr,strerror(merr));
		return NULL;
	}

	for(int i = 0; mensaje[i] != '\0'; ++i)
	{
        	if(mensaje[i] >= 'A' && mensaje[i] <= 'Z')
            		cifrado[i]=(mensaje[i]+clave-'A')%26+'A';
        	else if(mensaje[i]>='a' && mensaje[i]<='z')
            		cifrado[i]=(mensaje[i]+clave-'a')%26+'a';
		else
			cifrado[i]=mensaje[i];
	}
	return cifrado;
}

char* descifrarCesar(char* mensajeCifrado, int clave)
{
    int size = strlen(mensajeCifrado);
    char* descifrado = (char*)malloc((size + 1) * sizeof(char));

    if (descifrado == NULL)
    {
        int merr = errno;
        printf("Error %d:%s\n", merr, strerror(merr));
        return NULL;
    }

    for (int i = 0; mensajeCifrado[i] != '\0'; ++i)
    {
        char caracter = mensajeCifrado[i];
        if (caracter >= 'A' && caracter <= 'Z')
            descifrado[i] = (caracter - clave - 'A' + 26) % 26 + 'A';
        else if (caracter >= 'a' && caracter <= 'z')
            descifrado[i] = (caracter - clave - 'a' + 26) % 26 + 'a';
        else
            descifrado[i] = caracter;
    }
    return descifrado;
}

char *cifrarVigenere(char *mensaje, char *clave)
{
    int size = strlen(mensaje);
    char* cifrado = (char*)malloc((size + 1) * sizeof(char));
    int clave_size = strlen(clave);
    int i;

    for (i=0;i<size; ++i)
    {
        if (isalpha(mensaje[i]))
        {
            char base = isupper(mensaje[i]) ? 'A' : 'a';
            int shift = clave[i % clave_size] - 'a';
            cifrado[i] = ((mensaje[i] - base + shift) % 26) + base;
        }
    }
    return cifrado;
}

char *descifrarVigenere(char *mensaje, char *clave)
{
    int size = strlen(mensaje);
    char* descifrado = (char*)malloc((size + 1) * sizeof(char));
    int clave_len = strlen(clave);
    int i;

    for (i = 0; i < size; ++i)
    {
        if (isalpha(mensaje[i]))
        {
            char base = isupper(mensaje[i]) ? 'A' : 'a';
            int shift = clave[i % clave_len] - 'a';
            descifrado[i] = ((mensaje[i] - base - shift + 26) % 26) + base;
        }
    }
    return descifrado;
}

int main()
{
    FILE *archivo = fopen("mensajeCifrado.txt", "w");
     FILE *archivoM = fopen("mensaje.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    int max=100;
    char* mensaje;
    mensaje=(char*)malloc(max*sizeof(char));


    int clave = 3;

    while (fgets(mensaje, sizeof(mensaje), archivoM) != NULL)
        scanf("%[^\n]%*c",mensaje);

    printf("Mensaje original: %s\n", mensaje);

    char* mensajeCifrado = cifrarCesar(mensaje, clave);
    fprintf(archivo, "Mensaje cifrado: %s \n ",mensajeCifrado);

    char* mensajeDescifrado = descifrarCesar(mensajeCifrado, clave);
    printf("Mensaje descifrado: %s \n ",mensajeDescifrado);

    char vigenere[]="bCb";
    printf("Cifrado de vigenere\n");

    char* mensajeVigenere = cifrarVigenere(mensaje, vigenere);
    printf("Mensaje cifrado: %s \n ",mensajeVigenere);

    char* descifradoVigenere = descifrarCesar(mensajeVigenere, vigenere);
    printf("Mensaje descifrado: %s \n ",descifradoVigenere);



    // Cierra el archivo
    fclose(archivo);

    return 0;
}

