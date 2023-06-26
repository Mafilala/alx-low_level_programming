/**
 * reset_to_98 - a function that reset any val to 98
 * @n - pointer to n
 * Description: accepts pointer and update the value
 * Return: void
 */
void reset_to_98(int *n)
{
  *n = 98;
}
int main(){
int val = 110;
printf("%d", val);
reset_to_98(&val);
printf("%d", val);
}
