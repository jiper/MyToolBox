#include "csv_io.h"

FILE *csv_out_file;

void CsvCreateFile(char *file_name)
{
	csv_out_file = fopen(file_name, "wt");
	char *head_info = "��Ҫ��ӵ�ͷ����Ϣ";		//�˴���ͷ����Ϣ�����Զ���
	fprintf(csv_out_file, "%s,%s\n", head_info, "2018-5-30");
}

void CsvCloseFile(void)
{
	if (csv_out_file != NULL)
	{
		fclose(csv_out_file);
	}
}


void CsvWriteRecord(char *sub_file_name, int para1, float para2)
{
	fprintf(csv_out_file, "%s, %d, %f\n", sub_file_name, para1, para2);
}


int CsvReadExample(char *file_name)
{
	FILE *fin;
	fin = fopen(file_name, "rt");
	if (fin == NULL)
	{
		printf("cannot open thi file\n");
		return -1;
	}
	char *line, *record;
	char buffer[1024];
	char delims[] = ","; //Ĭ�ϵķָ����������Ҫ���޸Ĵ˴�

	while ((line = fgets(buffer,sizeof(buffer),fin))!=NULL)
	{
		record = strtok(line, delims);
		while (record != NULL)
		{
			printf("%s", record);
			//printf("%s", delims);
			record = strtok(NULL, delims);
		}
	}
	fclose(fin);
	return 0;
}
