SELECT TRUNC(SUM(p.price)/COUNT(p.id),2)
	FROM products p;