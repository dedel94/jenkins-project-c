#include <stdio.h>
#include <time.h>
#include <unistd.h> // Pour la fonction sleep()

int main() {
    while (1) { // Boucle infinie
        time_t currentTime;
        struct tm *localTime;

        // Obtenir l'heure actuelle
        currentTime = time(NULL);

        // Convertir en format local
        localTime = localtime(&currentTime);

        int hour = localTime->tm_hour;
        int minute = localTime->tm_min;
        int second = localTime->tm_sec;

        // Afficher l'heure actuelle
        printf("\rHeure actuelle : %02d:%02d:%02d", hour, minute, second);
        fflush(stdout); // Forcer l'affichage immédiat

        // Pause d'une seconde
        sleep(1);
    }

    return 0;
}
