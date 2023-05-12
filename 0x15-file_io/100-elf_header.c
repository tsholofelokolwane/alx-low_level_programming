#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * read_elf_header - displays the information contained in
 * the ELF header at the start of an ELF file
 * @elf_filename: Name of elf file
 * @outputFile: Resulting file
 *
 */

void read_elf_header(const char *elf_filename, const char *outputFile)
{
	elf_header header;
	FILE *file = fopen(elf_filename, "rb");

	if (file)
	{
		/* read the header */
		fread(&header, 1, sizeof(header), file);

		/* check so its really an elf file */
		if (header.e_type == 0x7f &&
				header.e_ident[1] == 'E' &&
				header.e_ident[2] == 'L' &&
				header.e_ident[3] == 'F')
		{
			/* write the header to the output file */
			FILE *fout = fopen(outputFile, "wb");

			if (fout)
			{
				fwrite(&header, 1, sizeof(header), fout);
				fclose(fout);
			}
			else
			{
				fprintf(stderr, "ERROR: Error in file\n");
				exit(98);
			}
		}
		else
			{
				fprintf(stderr, "ERROR: The file is not an ELF file\n");
				exit(98);
			}
		}

		/* finally close the file */
		fclose(file);
}
