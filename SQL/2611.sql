SELECT m.id, m.name 
	FROM movies m
    WHERE m.id_genres = (
        SELECT g.id FROM genres g
        	WHERE g.description = 'Action');