# README Projet MA-24

## Introduction

Ce document rédigé dans le cadre du cours "Appui de programmation et outil de développement" dispensé lors du module MA-24, a pour but de présenter et d'analyser une problématique de programmation.

Plus précisemment, ce document va détailler la problématique de l'utilisation des pointeurs en langage C. Quand les utiliser, qu'apportent-ils au langange, etc.

## Analyse de la problématique

Lors de la réalisation du projet "Bataille navale" durant le module MA-20, nous avons pu nous essayer à la réalisation d'une application en C plus ou moins conséquente. Bien que nous disposions des outils amplement nécessaire à la réalisation de ce projet, plusieurs difficultés ont été rencontrées dont certaines pouvant être résolues à l'aide de pointeurs.

Le problème principal et récurrent était l'impossibilité de renvoyer plusieurs valeurs d'une fonction. Souvent, la résolution de cette problématique se résolvait soit dans la création de plusieurs fonctions chacune retournant une valeur unique, soit dans l'utilisation de variable globales, ces dernières étant peu recommandées

En parallèle de ce document sera codé une petite application simple mettant en illustration l'usage de pointeurs. Il s'agira d'un "Découpe minutes" devant transformer une valeur entrée par l'utilisateur en nombre d'heure et de minutes.

## Recherches

Jusqu'à maintenant, j'ai toujours réussi à réaliser mes programmes en C en contournant l'utilisation de pointeurs grâce notamment aux variables globales. Cependant, certains enseignants m'ont toujours déconseillé ces dernières. Pourquoi ? C'est donc le sujet de ma première recherche que j'ai naturellement orienté sur "StackOverflow", j'ai aterri sur cette adresse: https://bit.ly/2UgaQa1
J'y ai donc appris que les variables globales deviennent problématique au fur et à mesure qu'un programme prend de l'ampleur. Une variable globale déclarée implique que je dois regarder chaque fonctions afin de savoir si cette dernière change la valeur de ladite variable. À petite échelle et si je travaille seul, cela reste faisable. Cependant cela devient très vite complexe (voir ingérable) sur un gros projets impliquant plusieurs collaborateurs.

Mais alors, quid des fonctions ? Je peux toujours contourner le problème des pointeurs en déclarant autant de fonction que j'ai besoin de variables retournées. Un des gros avantages des fonctions, c'est qu'elles permettent d'éviter la répétition d'écriture.
À cette adresse: https://bit.ly/2K8ScfT se trouve tous les avantages des fonctions. Toutefois, dans mon exemple, je crée deux fonctions me renvoyant une valeur de type INT. Elles sont redondantes en plus de m'augmenter la taille de mon code et de complexifier sa navigation.

Pour termienr, afin de me renseigner sur la définition des pointeurs, j'ai effectué des recherches sur google. Je suis ainsi tombé sur l'adresse suivante: https://bit.ly/2K31JVy.
Non seulement cette source m'a permi de développer mes connaissances sur le sujet (définition, utilisation, etc...), mais elle m'a égalment mis à dispostion un exemple de code utilisant les pointeurs. Exemple dont je vais m'inspirer pour développer mon projet.
