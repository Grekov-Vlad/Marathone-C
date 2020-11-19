//#include <stdio.h>
//#include <string.h>

int mx_strcmp(const char *s1, const char *s2) {
	int i = 0;
    while (s1[i] == s2[i]) {
		if (s1[i] == '\0' && s2[i] == '\0') {
			return 0;
		}
		i++;
	}
	return (const unsigned char)s1[i] - (const unsigned char)s2[i];
}

/*int main(void) {
    const char *s1 = "ksksdf";
    const char *s2 = "sdffs";
    printf("%d\n", strcmp(s1, s2));
    printf("%d", mx_strcmp(s1, s2));
}*/