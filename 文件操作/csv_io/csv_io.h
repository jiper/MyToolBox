/************************************************************************/
/* ģ������csv_io
** ���ߣ�����
** ��������ģ������ʵ��C�����µ�csv�ļ���д������������ʾ������
** ����ʱ�䣺2018-5-30													*/
/************************************************************************/
#ifndef CSV_IO_H
#define CSV_IO_H
#include <stdio.h>

extern FILE *csv_out_file; //ͳһ��csvд����

void CsvCreateFile(char *file_name);
void CsvCloseFile(void);
void CsvWriteRecord(char *sub_file_name, int para1, float para2); //д�뷶����ʵ��Ӧ�����޸�
int CsvReadExample(char *file_name); // ����������ʵ��Ӧ�����޸�

#endif
