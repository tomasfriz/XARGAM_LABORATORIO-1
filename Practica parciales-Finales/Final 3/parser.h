#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED

int xpar_parseUsers( arrayList* lista , char* filePath );
int xpar_parseMessages( arrayList* lista , char* filePath );

int xpar_unparseFeed( arrayList* usuarios, arrayList* mensajes, char* filePath );

#endif // PARSER_H_INCLUDED

