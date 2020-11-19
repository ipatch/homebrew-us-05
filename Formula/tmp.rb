  # if #{Formula["boost"].version}?("1.73.0")
  #   if (File.exist?('/usr/local/opt/boost/include/boost/geometry/index/detail/rtree/visitors/insert.hpp'))
  #    md5 = `md5 -q #{Formula["boost"].prefix}/include/boost/geometry/index/detail/rtree/visitors/insert.hpp` ; result=$?.success?
  #    if "#{md5}"=="bdffae5aee2ac909fe503f9afaae3ad9\n"
  #      # The include file needs to be patched
  #      # https://github.com/boostorg/geometry/commit/a74a2b5814a8753013a8966606b8472178fffd14
  #      patch = "--- a/include/boost/geometry/index/detail/rtree/visitors/insert.hpp
# +++ b/include/boost/geometry/index/detail/rtree/visitors/insert.hpp
# @@ -265,7 +265,7 @@ struct insert_traverse_data
 # // Default insert visitor
 # template <typename Element, typename MembersHolder>
 # class insert
# -    : MembersHolder::visitor
# +    : public MembersHolder::visitor
 # {
 # protected:
  #    typedef typename MembersHolder::box_type box_type;\n"

  #     File.open("/tmp/include_insert_boost1.73.0.patch", "w") { |f| f.write "#{patch}\n" }
  #     system "patch", "-p1", "/usr/local/Cellar/boost/1.73.0/include/boost/geometry/index/detail/rtree/visitors/insert.hpp" , "/tmp/include_insert_boost1.73.0.patch"
  #     system "rm", "/tmp/include_insert_boost1.73.0.patch"
  #    end
  #  end
  # end
 
