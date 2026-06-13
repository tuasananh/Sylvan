qmake
make -j"$(nproc)"
mkdir -p target/release
cp ./projects/cli/sylvan-cli ./target/release/
cp ./projects/gui/sylvan ./target/release/
cp ./projects/gui/image ./target/release/ -r
tar czf ./target/sylvan.tar.gz -C ./target/release/ .
