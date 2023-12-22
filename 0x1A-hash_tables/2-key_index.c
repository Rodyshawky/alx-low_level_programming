#include "hash_tables.h"
/**
*key_index - create hash table
*@key: key hash
*@size: size of hash table
*Return: index of key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
