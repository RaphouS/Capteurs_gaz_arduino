# Capteurs Gaz Arduino

## Description

Ce projet utilise PlatformIO pour développer une application Arduino pour la détection de gaz. Il intègre divers capteurs de gaz et fournit une interface pour surveiller les niveaux de gaz en temps réel.

## Prérequis

- [PlatformIO](https://platformio.org/) installé
- Carte Arduino compatible (par exemple, Arduino Uno, ESP32, etc.)
- Capteurs de gaz appropriés (MQ-2, MQ-135, etc.)

## Installation

1. Clonez ce dépôt :
   ```
   git clone https://github.com/votre-utilisateur/capteurs-gaz-arduino.git
   cd capteurs-gaz-arduino
   ```

2. Ouvrez le projet dans PlatformIO :
   ```
   platformio init --ide vscode
   ```

3. Installez les dépendances :
   ```
   platformio lib install
   ```

## Utilisation

1. Connectez vos capteurs de gaz à la carte Arduino selon le schéma fourni.
2. Téléversez le code :
   ```
   platformio run --target upload
   ```
3. Ouvrez le moniteur série pour voir les lectures des capteurs :
   ```
   platformio device monitor
   ```

## Structure du projet

- `src/main.cpp` : Code principal de l'application
- `include/` : Fichiers d'en-tête
- `lib/` : Bibliothèques personnalisées
- `test/` : Tests unitaires

## Configuration

Modifiez `platformio.ini` pour configurer votre carte Arduino et les paramètres du projet.

## Contribution

Les contributions sont les bienvenues ! Veuillez créer une issue ou soumettre une pull request.

## Licence

Ce projet est sous licence MIT. Voir le fichier LICENSE pour plus de détails.