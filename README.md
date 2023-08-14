# PacMan

Jogo básico do PACMAN feito em C++ usando a biblioteca OpenGL

Este projeto foi feito enquanto eu estava fazendo a faculdade de Ciência da Computação no UNASP. Nem me lembro direito como que eu consegui fazer este código

# Como rodar (Windows)

## Build DockerFile

```
docker build -t tigredomexico/gcc:1.0 .
```

## Run DockerFile

```
docker run -i -t -v "%cd%":/source tigredomexico/gcc:1.0 make /source/pacman
```