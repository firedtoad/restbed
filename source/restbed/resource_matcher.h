/*
 * Site: restbed.corvusoft.co.uk
 * Author: Ben Crowhurst
 *
 * Copyright (c) 2013 Restbed Core Development Team and Community Contributors
 *
 * This file is part of Restbed.
 *
 * Restbed is free software: you can redistribute it and/or modify
 * it under the terms of the Lesser GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Restbed is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * Lesser GNU General Public License for more details.
 *
 * You should have received a copy of the Lesser GNU General Public License
 * along with Restbed.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _RESTBED_RESOURCE_MATCHER_H
#define _RESTBED_RESOURCE_MATCHER_H 1

//System Includes
#include <memory>
 
//Project Includes

//External Includes

//System Namespaces

//Project Namespaces

//External Namespaces

namespace restbed
{
    //Forward Declarations
    class Request;
    class Resource;
    
    namespace detail
    {
        class ResourceMatcherImpl;
    }

    class ResourceMatcher
    {
        public:
            //Friends
            
            //Definitions

            //Constructors
            ResourceMatcher( const Request& request );
        
            ResourceMatcher( const ResourceMatcher& original );
        
            virtual ~ResourceMatcher( void );

            //Functionality

            //Getters

            //Setters

            //Operators
            bool operator( )( const Resource& resource ) const;          

            //Properties
            
        protected:
            //Friends
            
            //Definitions
            
            //Constructors
            
            //Functionality
            
            //Getters
            
            //Setters
            
            //Operators
            
            //Properties
            
        private:
            //Friends
            
            //Definitions
            
            //Constructors
            
            //Functionality
            
            //Getters
            
            //Setters
            
            //Operators
            ResourceMatcher& operator =( const ResourceMatcher& rhs ) = delete;

            //Properties
            std::unique_ptr< detail::ResourceMatcherImpl > m_pimpl;
    };
}

#endif  /* _RESTBED_RESOURCE_MATCHER_H */
