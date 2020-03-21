#ifndef SHUGOCONSOLE_HPP
#define SHUGOCONSOLE_HPP

#include <memory>

namespace shugoconsole
{
// The only thing you can do with a ShugoConsole interface is destroy it
class base_instance
{
  public:
	virtual ~base_instance();
};

[[nodiscard]] std::unique_ptr<base_instance> create();
} // namespace shugoconsole

#endif // SHUGOCONSOLE_HPP
