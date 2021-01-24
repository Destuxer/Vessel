FROM gitpod/workspace-full-vnc

USER root

RUN apt-get update && apt-get install -y \
libglfw3-dev \
libgl1 \
libx11-dev \
libxkbfile-dev \
libsecret-1-dev \
libgconf2–4 \
libnss3