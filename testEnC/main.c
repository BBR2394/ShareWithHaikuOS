
int my_putchar(char c) {
	write(1, &c, 1);
}

int my_putstr(char *str) {
	if (str[0] != '\0') {
		my_putchar(str[0]);
		my_putstr(&str[1]);
	}
	return(0);
}

int main() {
	my_putchar('C');
	my_putchar('\n');
	my_putstr("bonjour ceci est un test\n");
	return(0);
}