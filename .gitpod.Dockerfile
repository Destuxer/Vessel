FROM gitpod/workspace-full-vnc

USER root

RUN apt-get update && apt-get install -y \
libsdl2-dev \
libsdl2-image-dev \
libglfw3-dev
