/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 11:13:05 by mel-idri          #+#    #+#             */
/*   Updated: 2021/04/02 18:42:11 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct	s_vector
{
	size_t		capacity;
	size_t		length;
	size_t		element_size;
	void		(*free_element)(void *element);
	void		*array;
}				t_vector;

t_vector		*vector_init(size_t element_size
	, void (*free_element)(void *element));
t_vector		*vector_init_capacity(size_t element_size, size_t capacity,
					void (*free_element)(void *element));
int				vector_push(t_vector *vector, void *element);
int				vector_insert(t_vector *vector, void *element, size_t index);
int				vector_pop(t_vector *vector, void *element);
int				vector_pop_index(t_vector *vector, size_t index, void *element);
void			vector_free(t_vector *vector);
int				vector_remove(t_vector *vector, size_t index);
int				vector_insert_all(t_vector *vector, t_vector *inserted_vec
	, size_t index);
#endif
