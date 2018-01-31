SELECT c.name, SUM(p.amount) FROM categories c, products p
	WHERE p.id_categories = c.id
	GROUP BY c.name;