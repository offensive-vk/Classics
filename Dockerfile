FROM debian:bullseye

RUN apt-get update && \
    apt-get install -y \
    cmake \
    git \
    clang \
    libssl-dev \
    gcc \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /base

COPY . .

HEALTHCHECK --interval=30s --timeout=10s --start-period=5s --retries=3 \
    CMD echo "pass" || exit 1

CMD [ "gcc -o main ./C/main.c","./C/main.exe" ]