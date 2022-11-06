SELECT
    A.APNT_NO 
    ,P.PT_NAME
    ,P.PT_NO
    ,A.MCDP_CD
    ,D.DR_NAME
    ,A.APNT_YMD
FROM APPOINTMENT AS A
LEFT JOIN PATIENT AS P 
ON A.PT_NO=P.PT_NO
LEFT JOIN DOCTOR AS D
ON A.MDDR_ID = D.DR_ID 
WHERE A.MCDP_CD="CS"
AND DATE_FORMAT(A.APNT_YMD ,'%Y-%m-%d') ='2022-04-13'
AND A.APNT_CNCL_YN ='N'
ORDER BY A.APNT_YMD;