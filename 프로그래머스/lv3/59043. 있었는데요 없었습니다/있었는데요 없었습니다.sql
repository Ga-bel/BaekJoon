-- 코드를 입력하세요
SELECT i.animal_id animal_id, i.name name
from animal_ins i join animal_outs o
on i.animal_id = o.animal_id
where i.datetime > o.datetime
order by i.datetime;