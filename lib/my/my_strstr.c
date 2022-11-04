/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** find the string choice
*/

char *my_strstr(char *str, char *to_find)
{
    for (int i = 0; str[i]; i++) {
        for (int j = 0; to_find[j] == str[i + j]; j++) {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
        }
    }
    return (0);
}
