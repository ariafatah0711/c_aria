#include <stdio.h>

enum notif_type {EMAIL, SMS};

typedef struct {
    char* title;
    char* message;
    enum notif_type type;
    union {
        char* phone_number;
        char* email_address;
    };
} Notification;

void main() {
    Notification sms;
    Notification email;

    sms.type = SMS;
    sms.title = "Greeting";
    sms.message = "Halo Selamt Datang";
    sms.phone_number = "089131729910";

    email.type = EMAIL;
    email.title = "Welcome";
    email.message = "Selamat Datang di Aplikasi";
    email.email_address = "main@example.com";

    printf("[+] NOTIFICATION SMS\n");
    printf("    to   \t: %s\n", sms.phone_number);
    printf("    message \t: %s\n\n", sms.message);

    printf("[+] NOTIFICATION EMAIL\n");
    printf("    subject \t: %s\n", email.title);
    printf("    to   \t: %s\n", email.email_address);
    printf("    message \t: %s\n", email.message);
}