# Conversion Minutes en Heures/Minutes

Petit programme en C qui convertit un nombre de minutes saisi par l'utilisateur en heures et minutes, en utilisant des pointeurs.

##  Description

Ce projet demande à l'utilisateur un nombre total de minutes, puis affiche l'équivalent sous forme d'heures et de minutes, grâce à une fonction utilisant des **pointeurs** pour modifier directement les variables du programme principal.

##  Fonctionnalités

| Fonction | Description | Paramètres |
|----------|-------------|------------|
| `decoupeheure(int *heures, int *minutes)` | Convertit un nombre de minutes en heures + minutes restantes | Pointeurs vers `heures` et `minutes` |

##  Compilation

Assurez-vous d'avoir un compilateur C installé (comme `gcc`), puis exécutez :

```bash
gcc main.c -o main
```

##  Exécution

```bash
./main
```

##  Exemple d'utilisation

```
entrez des minutes: 125
2 heure 5 minutes.
```


##  Technologies utilisées

- Langage **C**
- Compilateur **GCC**
- Utilisation des **pointeurs**
