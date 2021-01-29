FROM gitpod/workspace-full-vnc

USER root

RUN apt-get update && apt-get install -y \
libglfw3-dev \
libgl1 \
libX11 \
libxinerama-dev \
libxcursor-dev
