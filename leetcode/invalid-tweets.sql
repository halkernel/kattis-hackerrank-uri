# Write your MySQL query statement below


select t.tweet_id from tweets t 
    where length(content) > 15;
