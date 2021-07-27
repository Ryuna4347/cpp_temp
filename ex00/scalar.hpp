/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:48:48 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/27 15:23:03 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <limits>
# include <sstream>
# include <iomanip>

class Scalar
{
private:
	std::string str;
public:
	float	fvalue;
	int		ivalue;
	char	cvalue;
	double	dvalue;
	bool	impossible_flag;
	bool	float_flag;
	bool	double_flag;
	bool	over_flag;
	bool	nan_float_flag;
	bool	nan_double_flag;
	char	type;
	Scalar(const std::string &argv);
	void	Print();
	char	parse(void);
	void	conversion(void);
	void	FromInteger(void);
	void	FromFloat(void);
	void	FromDouble(void);
	void	FromChar(void);
	void	PrintChar(void);
	void	PrintInt(void);
	void	PrintFloat(void);
	void	PrintDouble(void);
};

#endif