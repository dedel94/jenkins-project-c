# jenkins-project-c

Ce projet fournit un exemple simple de programme en C qui affiche l'heure et les minutes actuelles en utilisant la bibliothèque standard `time.h`.

## **Description**

Le programme utilise la fonction `time()` pour récupérer l'heure système actuelle, et `localtime()` pour convertir cette heure au format local. Ensuite, il extrait l'heure (`tm_hour`) et les minutes (`tm_min`) pour les afficher au format 24 heures.

## **Fonctionnalités**

- Affiche l'heure et les minutes au format **24 heures** (HH:MM).

## **Exemple de sortie**

### Format 24 heures

```
Current time: 14:30
```

## **Prérequis**

- Un compilateur C (par exemple, `gcc`).
- Une machine avec la bibliothèque standard C (`time.h`).

## **Compilation**

Pour compiler le programme, utilisez la commande suivante :

```bash
gcc -o current_time current_time.c
```

## **Exécution**

Pour exécuter le programme :

```bash
./current_time
```

## Démarrer ce projet avec Docker
```
docker build . -t current-time
docker run --rm current-time
```

Pour sortir du programme appuyer sur les touches ctrl + C