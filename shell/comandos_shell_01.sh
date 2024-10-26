mkdir -p ~/42/shell/shell_01
cd ~/42/shell/shell_01
rm -rf ex*

mkdir ex01
echo -n '-Gn $FT_USER | tr " " "," | tr -d "\n"' > ex01/print_groups.sh

mkdir ex02
echo -n 'find . -type f -name "*.sh" -exec basename {} .sh \;' > ex02/find_sh.sh

mkdir ex03
echo -n 'find . | wc -l' > ex03/count_files.sh

mkdir ex04
echo -n 'ifconfig | grep ether | awk '\''{print $2}'\'> ex04/MAC.sh

mkdir ex05
cd ex05
echo -n "42" > \"\\\?\$\*\'MaRViN\'\*\$\?\\\" && chmod 614 \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
