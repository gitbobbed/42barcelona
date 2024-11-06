mkdir -p ~/42/shell/shell_00
cd ~/42/shell/shell_00
rm -rf ex0*
rm -rf resources/
rm -rf .gitignore

mkdir ex00
cd ex00
echo "Z" > z
cd ..

mkdir ex01
cd ex01
touch testShell00
truncate -s 40 testShell00
touch -t 06012342 testShell00
chmod 455 testShell00
tar -cf testShell00.tar testShell00
rm -f testShell00
cd ..

mkdir ex02
cd ex02
mkdir test0 test2
touch test1 test3 test4
ln -s test0 test6
ln test3 test5
truncate -s 4 test1
truncate -s 1 test3
truncate -s 2 test4
truncate -s 1 test5
touch -t 06012047 test0
touch -t 06012146 test1
touch -t 06012245 test2
touch -t 06012344 test3
touch -t 06012343 test4
touch -t 06012344 test5
touch -ht 06012220 test6
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
chmod 404 test5
tar -cf exo2.tar *
rm -rf test1 test3 test4 test5 test6
rm -rf test0/ test2/
cd ..

mkdir ex03
cp $HOME/.ssh/id_rsa.pub ex03/id_rsa_pub

mkdir ex04
echo "ls -mtp" > ex04/midLS

mkdir ex05
echo "git log --format='%H' -n5" > ex05/git_commit.sh

mkdir ex06
touch .ejemplo_ignore
echo "git ls-files --others --ignored --exclude-standard" > ex06/git_ignore.sh
echo ".ejemplo_ignore" >> .gitignore
echo "resources/" >> .gitignore

mkdir ex07
mkdir resources
wget https://cdn.intra.42.fr/document/document/25626/resources.tar.gz -O resources.tar.gz && tar -xzvf resources.tar.gz -C resources/ && rm resources.tar.gz
patch resources/a < resources/sw.diff -o resources/b
mv resources/b ex07/

mkdir ex08
echo "find . \( -name '*~' -o -name '#*#' \) -print -delete" > ex08/clean

mkdir ex09
touch ex09/ft_magic
echo "41  string  42  42 file" > ex09/ft_magic
