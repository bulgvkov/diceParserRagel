# Readme

## Что сделано

Реализация вычисления формул случайных величин с бросками кубов.<br/>
Использована обратная польская нотация: https://ru.wikipedia.org/wiki/%D0%9E%D0%B1%D1%80%D0%B0%D1%82%D0%BD%D0%B0%D1%8F_%D0%BF%D0%BE%D0%BB%D1%8C%D1%81%D0%BA%D0%B0%D1%8F_%D0%B7%D0%B0%D0%BF%D0%B8%D1%81%D1%8C<br/>
Использован генератор парсеров ragel: http://www.colm.net/open-source/ragel/

## Сборка

Для сборки рагельских файлов: ragel -o < output file > < input file >

## Benchmark

Формула: (3d6! + 5)*2 + (1d6)d3M1<br/>
![Test 1: (3d6! + 5)*2 + (1d6)d3M1]https://www.google.com/search?q=caw&safe=strict&sxsrf=ALeKk02aY6CKd5u84ZJXCkj3RlJ9j8DqAA:1608148304964&source=lnms&tbm=isch&sa=X&ved=2ahUKEwjHl9qjo9PtAhXwtYsKHexxAfoQ_AUoAXoECAYQAw&biw=1920&bih=937#imgrc=SSJoJeY-sk10dM

