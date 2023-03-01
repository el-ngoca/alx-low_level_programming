#include "main.h"
/**
 * char *_strcat - this will concatinate the two phrases
 * @dest: input
 * @src: input
 * Return: dest (concatinated)
 */
char *_strcat(char *dest, char *src)
char *_strcat(char *dest, const char *src)                                                                                            
{                                                                                                                                    
        int index = 0, dest_len = 0;                                                                                                 
                                                                                                                                     
        while (dest[index++])                                                                                                        
                dest_len++;                                                                                                          
                                                                                                                                     
        for (index = 0; src[index]; index++)                                                                                         
               dest[dest_len++] = src[index];                                                                                                                                                                   
        return (dest);                                                                                                               
}

