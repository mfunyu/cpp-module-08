/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunyu <mfunyu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:34:35 by mfunyu            #+#    #+#             */
/*   Updated: 2021/11/20 16:26:45 by mfunyu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>

template <typename T>
int	easyfind(T lst, int val)
{
	typename T::iterator found = std::find(lst.begin(), lst.end(), val);
	if (found == lst.end()) {
		throw std::invalid_argument("value not found");
	}
	return *found;
}

#endif /* EASYFIND_HPP */
