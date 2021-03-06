#ifndef NOR_FILES_H
#define NOR_FILES_H

#include <abstractfile.h>
#include <xpwn/8900.h>
#include <xpwn/img2.h>
#include <xpwn/lzssfile.h>

#ifdef __cplusplus
extern "C" {
#endif
	AbstractFile* openAbstractFile(AbstractFile* file);
	AbstractFile* openAbstractFile2(AbstractFile* file, const unsigned int* key, const unsigned int* iv);
	AbstractFile* duplicateAbstractFile(AbstractFile* file, AbstractFile* backing);
	AbstractFile* duplicateAbstractFile2(AbstractFile* file, AbstractFile* backing, const unsigned int* key, const unsigned int* iv, AbstractFile* certificate);
	void init_libxpwn();
#ifdef __cplusplus
}
#endif

#endif

