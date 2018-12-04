#pragma once
#ifndef READFILE_H
#define READFILE_H

void readTxt(char *file)
{
	FILE *fp = NULL;
	char buff[255];
	fp = fopen(file, "r");
	fgets(buff,255,(FILE*)fp);
	printf("%s", buff);
	fclose(fp);
}

#endif